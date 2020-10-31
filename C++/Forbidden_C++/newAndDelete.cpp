#include <iostream>
#include <vector>

int main(){
	//New and Delete now these in itself is not bad but they require some care to be used carefully
	// 
	// so the technical term for this is a MEMORY LEAK and happens when you allocate come memory and then forget the release it back to the system
	// so in some modern language the programming language itself do some work to see if that memory you just allocated is in use or not and if it is not it will just release it and it is called GARBAGE COLLECTION  
	// but c++ is not quite the same as it will not let go of the memory by itself unless you decide to do so

// now to deal with it in a more modern c++ way you can use smart pointer and if you wanna learn about them just watch the vid by the cherno
	


	return 0;
}