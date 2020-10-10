const axios=require('axios');

async function getNumberOfFollowers(){

	let res=await axios.get('https://api.github.com/users/pratik6158');

	console.log(res);

	let nOfFollowers=res.data.followers;
	let location=res.data.location;

	console.log(`# of followers : ${nOfFollowers}`);
	console.log(`# of Location : ${location}`);

}

getNumberOfFollowers();