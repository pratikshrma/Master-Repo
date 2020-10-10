const axios=require('axios');

async function makePostRequest(){

	let res=await axios.post('https://jsonplaceholder.typicode.com/posts');

	console.log(`Status Code: ${res.status}`);
	console.log(`Status Test: ${res.statusText}`);
	console.log(`Request Method: ${res.request.method}`);
	console.log(`Path: ${res.request.path}`);

	console.log(`Date: ${res.headers.date}`);
	console.log(`Data: ${res.data}`);
}

makePostRequest();


// this example makes an POST method request to an online testing server
