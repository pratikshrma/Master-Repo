# so now we gonna make a snake game
import pygame
import time
import random

white = (255, 255, 255)
yellow = (255, 255, 102)
black = (0, 0, 0)
red = (213, 50, 80)
green = (0, 255, 0)
blue = (50, 153, 213)
 

dis_width=600
dis_height=400


pygame.init()
dis=pygame.display.set_mode((dis_width,dis_height))
pygame.display.update()
pygame.display.set_caption('snake game by Aman')

game_over=False

clock=pygame.time.Clock()

snake_speed=10
snake_block=10

#bad mei dekta hei isko bhi user input se lega 

font_style=pygame.font.SysFont("bahnschrift",25)
score_font=pygame.font.SysFont("coomicsansms",35)

def your_Score(score):
	value=score_font.render("Your Score is "+str(score),True,yellow)
	dis.blit(value,[0,0])


def our_snake(snake_block,snake_list):
	for x in snake_list:
		pygame.draw.rect(dis,black, [x[0], x[1], snake_block, snake_block])
		# x1 and x2 coordinated vaha neeche append kia the line 110 ke aas pas



# ye message vale part ka utna pata ni hei hona kuch pygame specific
def message(msg,color):
	mesg=font_style.render(msg,True,color)
	dis.blit(mesg,[(dis_width/2)-50,(dis_height/2)-50])


# ye hei proper game loop pata ni kyu likah hei ye 
def gameLoop():
	game_over=False
	game_close=False
	

	x1=dis_width/2
	y1=dis_height/2

	x1_change=0
	y1_change=0
	
	snake_list=[]
	length_of_snake=1
# thk hei to is round function ka kya scren heiyaha pe samaj hi ni aa raha hei
# ab merko samaj ni aa raha hei itna ganda function lia bhi kyu hei yaha pe wtf
	
	# acha acha chal gaya pata snake ki speed 10 hei to sare food vale blocks bhi 10 ke multiple mei hi hone cahia varna vo kabhim atch hi ni karage

	foodx = (round(random.randrange(0, dis_width - snake_block) / 10.0) * 10.0)/2
  	foody = (round(random.randrange(0, dis_height - snake_block) / 10.0) * 10.0)/2 

  	# foodx=round(random.randrange(0,dis_width)) 	
  	# foody=round(random.randrange(0,dis_height))
	while not game_over:

		while game_close==True:
			dis.fill(blue)
			message("You Lost! Press Q-Quit or C-Play",red)
			
			pygame.display.update()

			for event in pygame.event.get():
				if event.type==pygame.KEYDOWN:
					if event.key==pygame.K_q:
						game_over=True
						game_close=False
					if event.key==pygame.K_c:
						game_over=False
						gameLoop()
					

		for event in pygame.event.get():
			if event.type==pygame.QUIT:
				game_over=True
			if event.type==pygame.KEYDOWN:
				if event.key==pygame.K_LEFT:
					x1_change=-5
					y1_change=0
				elif event.key==pygame.K_RIGHT:
					x1_change=5
					y1_change=0
				elif event.key==pygame.K_UP:
					y1_change=-5
					x1_change=0
				elif event.key==pygame.K_DOWN:
					y1_change=5
					x1_change=0

		if x1>=dis_width or x1<0 or y1>=dis_height or y1<0:
			game_close=True

		x1+=x1_change
		y1+=y1_change
		dis.fill(blue)
		pygame.draw.rect(dis,green,[foodx,foody,snake_block,snake_block])
		# ===================

		snake_Head=[]
		snake_Head.append(x1)
		snake_Head.append(y1)
		snake_list.append(snake_Head)

		if len(snake_list)>length_of_snake:
			del snake_list[0]
			# del just  means delete

		print(snake_list)
		print(snake_Head)
		# time.sleep(1)
		for x in snake_list[:-1]:
			if x==snake_Head:
				game_close=True

		our_snake(snake_block,snake_list)
		your_Score(length_of_snake-1)
		# ===================
		pygame.display.update()
		if(game_over==False):
 				score=0
		if x1==foodx and y1==foody:
			foodx = (round(random.randrange(0, dis_width - snake_block) / 10.0) * 10.0)/2
			foody = (round(random.randrange(0, dis_width - snake_block) / 10.0) * 10.0)/2
 			length_of_snake+=1
 			print("Yummy!!")
 		
 		clock.tick(snake_speed)

	message("You Lost",red)
	pygame.display.update()
	# time.sleep(2)

	pygame.quit()
	quit()

gameLoop()