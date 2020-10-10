const axios=require('axios');

async function makeHeadRequest(){
	let res=await axios.head('http://webcode.me');

	console.log(`Status: ${res.status}`);
	console.log(`Server: ${res.headers.server}`);
	console.log(`Date: ${res.headers.date}`);
	
}
makeHeadRequest();