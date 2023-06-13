const express = require("express");
const morgan = require("morgan");
const mongoose = require("mongoose");
const cors = require("cors");
const fs = require("fs");
const app = express();

/*
**
Global middleware : it'll work for all routes automatically
 */
app.use(express.json());

app.use(morgan("dev"));
app.use(cors());
app.use(globalMiddleware);
app.use(require("./routes"));

app.get("/", (req, res) => {
  res.send(`
    <!DOCTYPE html>
    <html>
        <head>
        <style>
        h1{
            color:blue;
            text-align:center;
        }
        p{
            text-align:center;
            color:#333;
        }
        </style>
        </head>
        <body>
            <h1>Hello world</h1>
            <p>Hey</p>
        </body>
    </html>
    
  `);
  // res.send("Hello user");

  /*res.json({
    title: "hello world",
  });


 res.attachment(); -> to download file */
});
function globalMiddleware(req, res, next) {
  console.log("HEY");
  next();
}

/* Custom Middleware 
  Syntax:
  function hadnler(req, res, next){

  }

*/

app.listen(4000, () => {
  console.log("Server is listening..");
});
