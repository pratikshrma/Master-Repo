const axios=require('axios');
const fs=require('fs');

var config={
	responseType:'stream'
};

let url ='https://images.dog.ceo/breeds/setter-english/n02100735_4870.jpg';

async function getImage(){

	let resp=await axios.get(url,config);
	resp.data.pipe(fs.createWriteStream('image.jpg'));
}

getImage();

// this example retrieve an image from the internet
