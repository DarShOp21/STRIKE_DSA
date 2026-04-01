const fs = require("fs");

fs.readdir('./', ((err, data) => {
    if (err) throw err;
    // console.log(data);

    data.map((file) => {
        if(file.match(".exe"))
            fs.rm(file , (err) => {});
    })
}))

// console.log(fs);