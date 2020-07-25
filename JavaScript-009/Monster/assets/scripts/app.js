const ATTACK_VALUE = 10;

const MONSTER_ATTACK_DAMAGE = 14;
let chosenMaxLife = 100;
let currentMonsterHealth = chosenMaxLife;
let currentPlayerLife = chosenMaxLife;

adjustHealthBars(chosenMaxLife);

function attackHandler()
{
  const damage = dealMonsterDamage(ATTACK_VALUE);
  currentMonsterHealth -= damage;
  const playerDamage = dealPlayerDamage(MONSTER_ATTACK_DAMAGE);
  currentPlayerLife -= playerDamage;
  if (currentPlayerLife <= 0)
  {
    alert('You Lose');
    }

  if (currentMonsterHealth <= 0)
  {
    alert('You Won');
    }

}

attackBtn.addEventListener('click', attackHandler);