var X=50;
var Y=50;
var diameter=50;
var r=218;
var g=160;
var b=221;


function setup()
{
    createCanvas(400,400);
}

function draw()
{
    background(r,g,b);
    fill(250,200,200);
    ellipse(X,Y,diameter,diameter);
    if(circleX<398)
    {
        circleX++;
        circleY++;
    }
    else
    {
        circleX=0;
        circleY=0;
    }
    
}