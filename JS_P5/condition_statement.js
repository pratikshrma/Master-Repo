function setup()
{
    createCanvas(600,400);
    background(100,100,0);
}
function draw()
{
    if(mouseX>300)
    {
        fill(0,0,200);
    }
    else
    {
        fill(200,0,0)
    }
    ellipse(100,100,30,30);
}