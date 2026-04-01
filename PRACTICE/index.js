// const fs = require('fs');

// function main(){
//     fs.readdir('./',(err,data) => {
//         data.forEach(file => {
//             if(file.match('.exe'))
//                 fs.rm(file , (err) => {})
//         })
//     })
// }

// main()

async function fetchData() {
    const proxyServer= "https://cors-anywhere.com/"
    const swiggyAPI = `https://www.swiggy.com/mapi/menu/pl?page-type=REGULAR_MENU&complete-menu=true&lat=19.07480&lng=72.88560&restaurantId=9864`;
    const response= await fetch(proxyServer + swiggyAPI);
    const contentType = response.headers.get("content-type");
    if (!contentType || !contentType.includes("application/json")) {
    const text = await response.text();
    console.error("Not JSON:", text.slice(0, 200));
    return;
    }

    const data = await response.json();
    console.log(data);
}

fetchData();