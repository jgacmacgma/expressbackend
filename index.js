//We call express() in order to create our express application,
//denoted by the object app. We then create a method to handle
// a GET request for /api/getList that will send a json response
// with a list of items. We will call this from our React app later.

const express = require("express");
// const cors = require("cors");
const path = require("path");
const app = express();
// app.use(cors(corsOptions));

// Set up a whitelist and check against it:
// Then pass them to cors:
// var whitelist = ["http://localhost:3000", "http://localhost:5000"];
// var corsOptions = {
//   origin: function(origin, callback) {
//     if (whitelist.indexOf(origin) !== -1) {
//       callback(null, true);
//     } else {
//       callback(new Error("Not allowed by CORS"));
//     }
//   }
// };

// Serve the static files from the React app
app.use(express.static(path.join(__dirname, "/reactfrontend")));

// An api endpoint that returns a short list of items
app.get("/api/getList", (req, res) => {
  var list = ["item1", "item2", "item3"];
  res.json(list);
  console.log("Sent list of items");
});

// Handles any requests that don't match the ones above
app.get("*", (req, res) => {
  res.sendFile(path.join(__dirname + "/reactfrontend/index.html"));
});

const port = process.env.PORT || 5000;
app.listen(port);

console.log("App is listening on port " + port);
