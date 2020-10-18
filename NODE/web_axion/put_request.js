// const axios = require('axios');

// axios.put('https://localhost:3000/users/6/',{
// 	first_name:'Fred',
// 	last_name:'Blair',
// 	email:'freddy34@gmail.com'
// }).then(resp=>{
// 	console.log(resp.data);
// }).catch(error=> {
// 	console.log(error);
// });

const axios = require('axios');

axios.put('http://localhost:3000/users/6/', {
    first_name: 'Fred',
    last_name: 'Blair',
    email: 'freddyb34@yahoo.com'
}).then(resp => {

    console.log(resp.data);
}).catch(error => {

    console.log(error);
});  