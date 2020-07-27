const ATTACK_VALUE = 10;
const STRONG_ATTACK_VALUE = 17;
const MONSTER_ATTACK_VALUE = 14;
const HEAL_VALUE = 20;

const MODE_ATTACK='ATTACK';
const MODE_STRONG_ATTACK='STRONG_ATTACK';


const LOG_EVENT_PLAYER_ATTACK = 'PLAYER_ATTACK';
const LOG_EVENT_PLAYER_STRONG_ATTACK = 'PLAYER_STRONG_ATTACK';
const LOG_EVENT_MONSTER_ATTACK = 'MONSTER_ATTACK';
const LOG_EVENT_PLAYER_HEAL='PLAYER_HEAL';
const LOG_EVENT_GAME_OVER='GAME_OVER';


let battleLog=[];

function getMaxLifeValue()
{
  const enteredValue=parseInt(prompt('Maximum life for You And The Monster,100'));
  const parsedValue= enteredValue;
  if(isNaN(parsedValue) || parsedValue<=0)
  {
    throw {message: 'Invalid user input, Not A Number'};
  }
  return parsedValue;
}

let chosenMaxLife;

try{
  chosenMaxLife=getMaxLifeValue();
}
  catch(error){
    console.log(error);
    chosenMaxLife=100;
  }



let currentMonsterHealth = chosenMaxLife;
let currentPlayerHealth = chosenMaxLife;
let hasBonusLife = true;

adjustHealthBars(chosenMaxLife);

function writeToLog(ev,val,monsterHealth,playerHealth)
{
  let logEntry=[];
  if(ev===LOG_EVENT_PLAYER_ATTACK)
  {
    logEntry={
      event: ev,
      value: val,
      taget: 'MONSTER',
      finalMonsterHealth:monsterHealth,
      finalPlayeHealth: playerHealth
    };
   }
   else if(ev===LOG_EVENT_PLAYER_STRONG_ATTACK)
  {
    logEntry={
      event: ev,
      value: val,
      taget: 'MONSTER',
      finalMonsterHealth:monsterHealth,
      finalPlayeHealth: playerHealth
    };
  }
  else if(ev===LOG_EVENT_MONSTER_ATTACK)
  {
    logEntry={
      event: ev,
      value: val,
      taget: 'PLAYER',
      finalMonsterHealth:monsterHealth,
      finalPlayeHealth: playerHealth
    };
   }
   else if(ev===LOG_EVENT_PLAYER_HEAL)
    {
    logEntry={
      event: ev,
      value: val,
      taget: 'PLAYER',
      finalMonsterHealth:monsterHealth,
      finalPlayeHealth: playerHealth
    };
   }
   else if(ev===LOG_EVENT_GAME_OVER)
    {
    logEntry={
      event: ev,
      value: val,
      taget: 'NULL',
      finalMonsterHealth:monsterHealth,
      finalPlayeHealth: playerHealth
    };
   }
   // console.log(logEntry);
      battleLog.push(logEntry);

}

function reset() {
  currentMonsterHealth = chosenMaxLife;
  currentPlayerHealth = chosenMaxLife;
  resetGame(chosenMaxLife);
}

function endRound() {
  const initialPlayerHealth = currentPlayerHealth;
  const playerDamage = dealPlayerDamage(MONSTER_ATTACK_VALUE);
  currentPlayerHealth -= playerDamage;
  writeToLog(
    LOG_EVENT_MONSTER_ATTACK,
    playerDamage,
    currentMonsterHealth,
    currentPlayerHealth
           );

  if (currentPlayerHealth <= 0 && hasBonusLife) {
    hasBonusLife = false;
    removeBonusLife();
    currentPlayerHealth = initialPlayerHealth;
    setPlayerHealth(initialPlayerHealth);
    alert('You would be dead but the bonus life saved you!');
  }

  if (currentMonsterHealth <= 0 && currentPlayerHealth > 0) {
    alert('You won!');
     writeToLog(
    LOG_EVENT_MONSTER_ATTACK,
    'PLAYER_WON',
    currentMonsterHealth,
    currentPlayerHealth
           );
  } else if (currentPlayerHealth <= 0 && currentMonsterHealth > 0) {
    alert('You lost!');
    writeToLog(
    LOG_EVENT_MONSTER_ATTACK,
    'PLAYER_LOST',
    currentMonsterHealth,
    currentPlayerHealth
           );
  } else if (currentPlayerHealth <= 0 && currentMonsterHealth <= 0) {
    alert('You have a draw!');
    writeToLog(
    LOG_EVENT_MONSTER_ATTACK,
    'DRAW',
    currentMonsterHealth,
    currentPlayerHealth
           );
    }

  if (currentMonsterHealth <= 0 || currentPlayerHealth <= 0) {
    reset();
  }
}

function attackMonster(mode) {
  let logEvent=[];
  let maxDamage;
  if (mode === MODE_ATTACK) {
    maxDamage = ATTACK_VALUE;
    logEvent=LOG_EVENT_PLAYER_ATTACK;
  } else if (mode === MODE_STRONG_ATTACK) {
    maxDamage = STRONG_ATTACK_VALUE;
    logEvent=LOG_EVENT_PLAYER_STRONG_ATTACK;
  }
  const damage = dealMonsterDamage(maxDamage);
  currentMonsterHealth -= damage;
  writeToLog(
    logEvent,
    damage,
    currentMonsterHealth,
    currentPlayerHealth
           );
  endRound();
}

function attackHandler() {
  attackMonster(MODE_ATTACK);
}

function strongAttackHandler() {
  attackMonster(MODE_STRONG_ATTACK);
}

function healPlayerHandler() {
  let healValue;
  if (currentPlayerHealth >= chosenMaxLife - HEAL_VALUE) {
    alert("You can't heal to more than your max initial health.");
    healValue = chosenMaxLife - currentPlayerHealth;
  } else {
    healValue = HEAL_VALUE;
  }
  increasePlayerHealth(healValue);
  currentPlayerHealth += healValue;
  writeToLog(
    LOG_EVENT_PLAYER_HEAL,
    healValue,
    currentMonsterHealth,
    currentPlayerHealth
           );
  endRound();
}

function printLogHandler()
{
  let j=0;
 do{
    console.log(j);
    j++;
  } while(j<3)
  // for(let i=0;i<3;i++)
  // {
  //   console.log('--------');
  // }
  // console.log(battleLog);
  
  let i=0;
  for(const logEntry of battleLog)
  {
    console.log(`#${i}`);
    for(const key in logEntry)
    {
      console.log(key);
      console.log(logEntry[key]);
    }
    i++;
  }
}

attackBtn.addEventListener('click', attackHandler);
strongAttackBtn.addEventListener('click', strongAttackHandler);
healBtn.addEventListener('click', healPlayerHandler);
logBtn.addEventListener('click',printLogHandler);


