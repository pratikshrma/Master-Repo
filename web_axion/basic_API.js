const axios=require('axios');

async function makeRequest(){
	const config={
		method:'get',
		url:'http://webcode.me'
	}
	let res=await axios(config)

	console.log(res.status);
}

makeRequest();


//this just make a get req to the serer and 200 means it's okay 
