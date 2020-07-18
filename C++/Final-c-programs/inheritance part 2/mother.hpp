#ifndef MOTHER_HPP
#define MOTHER_HPP

class mother
{
	public:
		mother();
		 int publicv;//access everywhere
			void sayname();
		
		 protected://only access inside and to the friends
		
			int protectedv;
		
		 
		 private://only access inside the class
			int privatev;

	

};

#endif /* MOTHER_HPP */ 
/* public and protected can be inherited but not the private class*/
