var Circle={
    x:50,
    y:50,
    diameter:50,
};//this is a js object and is same as the bottom 3 var statement
// var X=50;
// var Y=50;
// var diameter=50;

var r=218;
var g=160;
var b=0;


function setup()
{
    createCanvas(400,400);
}

function draw()
{
    print(circle.x);
    background(r,g,b);
    // fill(250,200,200);
    ellipse(Circle.x,Circle.y,Circle.diameter,Circle.diameter);
    // Circle.x=Circle.x+1;   
}
