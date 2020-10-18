var Point={
    x:100,
    y:0
};
var col={
    r:255,
    g:0,
    b:0
};

function setup()
{
    createCanvas(600,400);
    background(0);
}
function draw()
{
    Point.x=random(0,width);
    Point.y=random(0,height)
    fill(col.r,col.g,col.b);
    ellipse(Point.x,Point.y,10,10);
}