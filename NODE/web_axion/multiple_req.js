const axios = require('axios');

async function makeRequests() {

    let [u1, u2] = await Promise.all([
        axios.get('https://api.github.com/users/janbodnar'),
        axios.get('https://api.github.com/users/symfony')
    ]);

    console.log(`Jan Bodnar: ${u1.data.created_at}`);
    console.log(`Symfony: ${u2.data.created_at}`);
}

makeRequests();