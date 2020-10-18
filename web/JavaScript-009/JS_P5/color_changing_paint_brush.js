
function setup()
{
    createCanvas(600,400);
    background(100,100,100);
}
function draw()
{
    var Col={
        r:map(mouseX,0,600,0,255),
        b:map(mouseY,0,600,255,0),
    };
    print(Col.r);
    noStroke();
    fill(Col.r,0,Col.b);
    ellipse(mouseX,mouseY,39,39);
}