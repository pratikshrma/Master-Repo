const axios=require('axios');

async function makeGetRequest()
{
	let res=await axios.get('http://webcode.me');

	let data=res.data;
	console.log(data);
}
// this example creates a simple get request utilizing async/await syntax