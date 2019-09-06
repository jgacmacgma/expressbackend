[33mcommit d9de00d1f45fc82396183b3411ef81de1a6f3581[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: J Gemmell <jajg@gmx.com>
Date:   Fri Sep 6 13:50:53 2019 +0100

    initial commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..3c3629e[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mnode_modules[m
[1mdiff --git a/index.html b/index.html[m
[1mnew file mode 100644[m
[1mindex 0000000..7398632[m
[1m--- /dev/null[m
[1m+++ b/index.html[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m<h2>errrorrrrsssss</h2>[m
[1mdiff --git a/index.js b/index.js[m
[1mnew file mode 100644[m
[1mindex 0000000..3732dea[m
[1m--- /dev/null[m
[1m+++ b/index.js[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m//We call express() in order to create our express application,[m
[32m+[m[32m//denoted by the object app. We then create a method to handle[m
[32m+[m[32m// a GET request for /api/getList that will send a json response[m
[32m+[m[32m// with a list of items. We will call this from our React app later.[m
[32m+[m
[32m+[m[32mconst express = require("express");[m
[32m+[m[32m// const cors = require("cors");[m
[32m+[m[32mconst path = require("path");[m
[32m+[m[32mconst app = express();[m
[32m+[m[32m// app.use(cors(corsOptions));[m
[32m+[m
[32m+[m[32m// Set up a whitelist and check against it:[m
[32m+[m[32m// Then pass them to cors:[m
[32m+[m[32m// var whitelist = ["http://localhost:3000", "http://localhost:5000"];[m
[32m+[m[32m// var corsOptions = {[m
[32m+[m[32m//   origin: function(origin, callback) {[m
[32m+[m[32m//     if (whitelist.indexOf(origin) !== -1) {[m
[32m+[m[32m//       callback(null, true);[m
[32m+[m[32m//     } else {[m
[32m+[m[32m//       callback(new Error("Not allowed by CORS"));[m
[32m+[m[32m//     }[m
[32m+[m[32m//   }[m
[32m+[m[32m// };[m
[32m+[m
[32m+[m[32m// Serve the static files from the React app[m
[32m+[m[32mapp.use(express.static(path.join(__dirname, "/reactfrontend")));[m
[32m+[m
[32m+[m[32m// An api endpoint that returns a short list of items[m
[32m+[m[32mapp.get("/api/getList", (req, res) => {[m
[32m+[m[32m  var list = ["item1", "item2", "item3"];[m
[32m+[m[32m  res.json(list);[m
[32m+[m[32m  console.log("Sent list of items");[m
[32m+[m[32m});[m
[32m+[m
[32m+[m[32m// Handles any requests that don't match the ones above[m
[32m+[m[32mapp.get("*", (req, res) => {[m
[32m+[m[32m  res.sendFile(path.join(__dirname + "/reactfrontend/index.html"));[m
[32m+[m[32m});[m
[32m+[m
[32m+[m[32mconst port = process.env.PORT || 5000;[m
[32m+[m[32mapp.listen(port);[m
[32m+[m
[32m+[m[32mconsole.log("App is listening on port " + port);[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mnew file mode 100644[m
[1mindex 0000000..3848a79[m
[1m--- /dev/null[m
[1m+++ b/package-lock.json[m
[36m@@ -0,0 +1,388 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "expressbackend",[m
[32m+[m[32m  "version": "1.0.0",[m
[32m+[m[32m  "lockfileVersion": 1,[m
[32m+[m[32m  "requires": true,[m
[32m+[m[32m  "dependencies": {[m
[32m+[m[32m    "accepts": {[m
[32m+[m[32m      "version": "1.3.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/accepts/-/accepts-1.3.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-Il80Qs2WjYlJIBNzNkK6KYqlVMTbZLXgHx2oT0pU/fjRHyEp+PEfEPY0R3WCwAGVOtauxh1hOxNgIf5bv7dQpA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "mime-types": "~2.1.24",[m
[32m+[m[32m        "negotiator": "0.6.2"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "array-flatten": {[m
[32m+[m[32m      "version": "1.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/array-flatten/-/array-flatten-1.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-ml9pkFGx5wczKPKgCJaLZOopVdI="[m
[32m+[m[32m    },[m
[32m+[m[32m    "body-parser": {[m
[32m+[m[32m      "version": "1.19.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/body-parser/-/body-parser-1.19.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-dhEPs72UPbDnAQJ9ZKMNTP6ptJaionhP5cBb541nXPlW60Jepo9RV/a4fX4XWW9CuFNK22krhrj1+rgzifNCsw==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "bytes": "3.1.0",[m
[32m+[m[32m        "content-type": "~1.0.4",[m
[32m+[m[32m        "debug": "2.6.9",[m
[32m+[m[32m        "depd": "~1.1.2",[m
[32m+[m[32m        "http-errors": "1.7.2",[m
[32m+[m[32m        "iconv-lite": "0.4.24",[m
[32m+[m[32m        "on-finished": "~2.3.0",[m
[32m+[m[32m        "qs": "6.7.0",[m
[32m+[m[32m        "raw-body": "2.4.0",[m
[32m+[m[32m        "type-is": "~1.6.17"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "bytes": {[m
[32m+[m[32m      "version": "3.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/bytes/-/bytes-3.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-zauLjrfCG+xvoyaqLoV8bLVXXNGC4JqlxFCutSDWA6fJrTo2ZuvLYTqZ7aHBLZSMOopbzwv8f+wZcVzfVTI2Dg=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "content-disposition": {[m
[32m+[m[32m      "version": "0.5.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/content-disposition/-/content-disposition-0.5.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-ExO0774ikEObIAEV9kDo50o+79VCUdEB6n6lzKgGwupcVeRlhrj3qGAfwq8G6uBJjkqLrhT0qEYFcWng8z1z0g==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "safe-buffer": "5.1.2"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "content-type": {[m
[32m+[m[32m      "version": "1.0.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/content-type/-/content-type-1.0.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-hIP3EEPs8tB9AT1L+NUqtwOAps4mk2Zob89MWXMHjHWg9milF/j4osnnQLXBCBFBk/tvIG/tUc9mOUJiPBhPXA=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "cookie": {[m
[32m+[m[32m      "version": "0.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/cookie/-/cookie-0.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-+Hp8fLp57wnUSt0tY0tHEXh4voZRDnoIrZPqlo3DPiI4y9lwg/jqx+1Om94/W6ZaPDOUbnjOt/99w66zk+l1Xg=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "cookie-signature": {[m
[32m+[m[32m      "version": "1.0.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/cookie-signature/-/cookie-signature-1.0.6.tgz",[m
[32m+[m[32m      "integrity": "sha1-4wOogrNCzD7oylE6eZmXNNqzriw="[m
[32m+[m[32m    },[m
[32m+[m[32m    "cors": {[m
[32m+[m[32m      "version": "2.8.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/cors/-/cors-2.8.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-KIHbLJqu73RGr/hnbrO9uBeixNGuvSQjul/jdFvS/KFSIH1hWVd1ng7zOHx+YrEfInLG7q4n6GHQ9cDtxv/P6g==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "object-assign": "^4",[m
[32m+[m[32m        "vary": "^1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "debug": {[m
[32m+[m[32m      "version": "2.6.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/debug/-/debug-2.6.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-bC7ElrdJaJnPbAP+1EotYvqZsb3ecl5wi6Bfi6BJTUcNowp6cvspg0jXznRTKDjm/E7AdgFBVeAPVMNcKGsHMA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "ms": "2.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "depd": {[m
[32m+[m[32m      "version": "1.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/depd/-/depd-1.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha1-m81S4UwJd2PnSbJ0xDRu0uVgtak="[m
[32m+[m[32m    },[m
[32m+[m[32m    "destroy": {[m
[32m+[m[32m      "version": "1.0.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/destroy/-/destroy-1.0.4.tgz",[m
[32m+[m[32m      "integrity": "sha1-l4hXRCxEdJ5CBmE+N5RiBYJqvYA="[m
[32m+[m[32m    },[m
[32m+[m[32m    "ee-first": {[m
[32m+[m[32m      "version": "1.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ee-first/-/ee-first-1.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-WQxhFWsK4vTwJVcyoViyZrxWsh0="[m
[32m+[m[32m    },[m
[32m+[m[32m    "encodeurl": {[m
[32m+[m[32m      "version": "1.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/encodeurl/-/encodeurl-1.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha1-rT/0yG7C0CkyL1oCw6mmBslbP1k="[m
[32m+[m[32m    },[m
[32m+[m[32m    "escape-html": {[m
[32m+[m[32m      "version": "1.0.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/escape-html/-/escape-html-1.0.3.tgz",[m
[32m+[m[32m      "integrity": "sha1-Aljq5NPQwJdN4cFpGI7wBR0dGYg="[m
[32m+[m[32m    },[m
[32m+[m[32m    "etag": {[m
[32m+[m[32m      "version": "1.8.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/etag/-/etag-1.8.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-Qa4u62XvpiJorr/qg6x9eSmbCIc="[m
[32m+[m[32m    },[m
[32m+[m[32m    "express": {[m
[32m+[m[32m      "version": "4.17.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/express/-/express-4.17.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-mHJ9O79RqluphRrcw2X/GTh3k9tVv8YcoyY4Kkh4WDMUYKRZUq0h1o0w2rrrxBqM7VoeUVqgb27xlEMXTnYt4g==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "accepts": "~1.3.7",[m
[32m+[m[32m        "array-flatten": "1.1.1",[m
[32m+[m[32m        "body-parser": "1.19.0",[m
[32m+[m[32m        "content-disposition": "0.5.3",[m
[32m+[m[32m        "content-type": "~1.0.4",[m
[32m+[m[32m        "cookie": "0.4.0",[m
[32m+[m[32m        "cookie-signature": "1.0.6",[m
[32m+[m[32m        "debug": "2.6.9",[m
[32m+[m[32m        "depd": "~1.1.2",[m
[32m+[m[32m        "encodeurl": "~1.0.2",[m
[32m+[m[32m        "escape-html": "~1.0.3",[m
[32m+[m[32m        "etag": "~1.8.1",[m
[32m+[m[32m        "finalhandler": "~1.1.2",[m
[32m+[m[32m        "fresh": "0.5.2",[m
[32m+[m[32m        "merge-descriptors": "1.0.1",[m
[32m+[m[32m        "methods": "~1.1.2",[m
[32m+[m[32m        "on-finished": "~2.3.0",[m
[32m+[m[32m        "parseurl": "~1.3.3",[m
[32m+[m[32m        "path-to-regexp": "0.1.7",[m
[32m+[m[32m        "proxy-addr": "~2.0.5",[m
[32m+[m[32m        "qs": "6.7.0",[m
[32m+[m[32m        "range-parser": "~1.2.1",[m
[32m+[m[32m        "safe-buffer": "5.1.2",[m
[32m+[m[32m        "send": "0.17.1",[m
[32m+[m[32m        "serve-static": "1.14.1",[m
[32m+[m[32m        "setprototypeof": "1.1.1",[m
[32m+[m[32m        "statuses": "~1.5.0",[m
[32m+[m[32m        "type-is": "~1.6.18",[m
[32m+[m[32m        "utils-merge": "1.0.1",[m
[32m+[m[32m        "vary": "~1.1.2"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "finalhandler": {[m
[32m+[m[32m      "version": "1.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/finalhandler/-/finalhandler-1.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-aAWcW57uxVNrQZqFXjITpW3sIUQmHGG3qSb9mUah9MgMC4NeWhNOlNjXEYq3HjRAvL6arUviZGGJsBg6z0zsWA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "debug": "2.6.9",[m
[32m+[m[32m        "encodeurl": "~1.0.2",[m
[32m+[m[32m        "escape-html": "~1.0.3",[m
[32m+[m[32m        "on-finished": "~2.3.0",[m
[32m+[m[32m        "parseurl": "~1.3.3",[m
[32m+[m[32m        "statuses": "~1.5.0",[m
[32m+[m[32m        "unpipe": "~1.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "forwarded": {[m
[32m+[m[32m      "version": "0.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/forwarded/-/forwarded-0.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha1-mMI9qxF1ZXuMBXPozszZGw/xjIQ="[m
[32m+[m[32m    },[m
[32m+[m[32m    "fresh": {[m
[32m+[m[32m      "version": "0.5.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fresh/-/fresh-0.5.2.tgz",[m
[32m+[m[32m      "integrity": "sha1-PYyt2Q2XZWn6g1qx+OSyOhBWBac="[m
[32m+[m[32m    },[m
[32m+[m[32m    "http-errors": {[m
[32m+[m[32m      "version": "1.7.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/http-errors/-/http-errors-1.7.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-uUQBt3H/cSIVfch6i1EuPNy/YsRSOUBXTVfZ+yR7Zjez3qjBz6i9+i4zjNaoqcoFVI4lQJ5plg63TvGfRSDCRg==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "depd": "~1.1.2",[m
[32m+[m[32m        "inherits": "2.0.3",[m
[32m+[m[32m        "setprototypeof": "1.1.1",[m
[32m+[m[32m        "statuses": ">= 1.5.0 < 2",[m
[32m+[m[32m        "toidentifier": "1.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "iconv-lite": {[m
[32m+[m[32m      "version": "0.4.24",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/iconv-lite/-/iconv-lite-0.4.24.tgz",[m
[32m+[m[32m      "integrity": "sha512-v3MXnZAcvnywkTUEZomIActle7RXXeedOR31wwl7VlyoXO4Qi9arvSenNQWne1TcRwhCL1HwLI21bEqdpj8/rA==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "safer-buffer": ">= 2.1.2 < 3"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "inherits": {[m
[32m+[m[32m      "version": "2.0.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/inherits/-/inherits-2.0.3.tgz",[m
[32m+[m[32m      "integrity": "sha1-Yzwsg+PaQqUC9SRmAiSA9CCCYd4="[m
[32m+[m[32m    },[m
[32m+[m[32m    "ipaddr.js": {[m
[32m+[m[32m      "version": "1.9.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ipaddr.js/-/ipaddr.js-1.9.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-M4Sjn6N/+O6/IXSJseKqHoFc+5FdGJ22sXqnjTpdZweHK64MzEPAyQZyEU3R/KRv2GLoa7nNtg/C2Ev6m7z+eA=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "media-typer": {[m
[32m+[m[32m      "version": "0.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/media-typer/-/media-typer-0.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha1-hxDXrwqmJvj/+hzgAWhUUmMlV0g="[m
[32m+[m[32m    },[m
[32m+[m[32m    "merge-descriptors": {[m
[32m+[m[32m      "version": "1.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/merge-descriptors/-/merge-descriptors-1.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-sAqqVW3YtEVoFQ7J0blT8/kMu2E="[m
[32m+[m[32m    },[m
[32m+[m[32m    "methods": {[m
[32m+[m[32m      "version": "1.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/methods/-/methods-1.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha1-VSmk1nZUE07cxSZmVoNbD4Ua/O4="[m
[32m+[m[32m    },[m
[32m+[m[32m    "mime": {[m
[32m+[m[32m      "version": "1.6.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/mime/-/mime-1.6.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-x0Vn8spI+wuJ1O6S7gnbaQg8Pxh4NNHb7KSINmEWKiPE4RKOplvijn+NkmYmmRgP68mc70j2EbeTFRsrswaQeg=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "mime-db": {[m
[32m+[m[32m      "version": "1.40.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/mime-db/-/mime-db-1.40.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-jYdeOMPy9vnxEqFRRo6ZvTZ8d9oPb+k18PKoYNYUe2stVEBPPwsln/qWzdbmaIvnhZ9v2P+CuecK+fpUfsV2mA=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "mime-types": {[m
[32m+[m[32m      "version": "2.1.24",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/mime-types/-/mime-types-2.1.24.tgz",[m
[32m+[m[32m      "integrity": "sha512-WaFHS3MCl5fapm3oLxU4eYDw77IQM2ACcxQ9RIxfaC3ooc6PFuBMGZZsYpvoXS5D5QTWPieo1jjLdAm3TBP3cQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "mime-db": "1.40.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "ms": {[m
[32m+[m[32m      "version": "2.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ms/-/ms-2.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha1-VgiurfwAvmwpAd9fmGF4jeDVl8g="[m
[32m+[m[32m    },[m
[32m+[m[32m    "negotiator": {[m
[32m+[m[32m      "version": "0.6.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/negotiator/-/negotiator-0.6.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-hZXc7K2e+PgeI1eDBe/10Ard4ekbfrrqG8Ep+8Jmf4JID2bNg7NvCPOZN+kfF574pFQI7mum2AUqDidoKqcTOw=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "object-assign": {[m
[32m+[m[32m      "version": "4.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/object-assign/-/object-assign-4.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha1-IQmtx5ZYh8/AXLvUQsrIv7s2CGM="[m
[32m+[m[32m    },[m
[32m+[m[32m    "on-finished": {[m
[32m+[m[32m      "version": "2.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/on-finished/-/on-finished-2.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha1-IPEzZIGwg811M3mSoWlxqi2QaUc=",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "ee-first": "1.1.1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "parseurl": {[m
[32m+[m[32m      "version": "1.3.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/parseurl/-/parseurl-1.3.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-CiyeOxFT/JZyN5m0z9PfXw4SCBJ6Sygz1Dpl0wqjlhDEGGBP1GnsUVEL0p63hoG1fcj3fHynXi9NYO4nWOL+qQ=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "path-to-regexp": {[m
[32m+[m[32m      "version": "0.1.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/path-to-regexp/-/path-to-regexp-0.1.7.tgz",[m
[32m+[m[32m      "integrity": "sha1-32BBeABfUi8V60SQ5yR6G/qmf4w="[m
[32m+[m[32m    },[m
[32m+[m[32m    "proxy-addr": {[m
[32m+[m[32m      "version": "2.0.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/proxy-addr/-/proxy-addr-2.0.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-t/7RxHXPH6cJtP0pRG6smSr9QJidhB+3kXu0KgXnbGYMgzEnUxRQ4/LDdfOwZEMyIh3/xHb8PX3t+lfL9z+YVQ==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "forwarded": "~0.1.2",[m
[32m+[m[32m        "ipaddr.js": "1.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "qs": {[m
[32m+[m[32m      "version": "6.7.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/qs/-/qs-6.7.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-VCdBRNFTX1fyE7Nb6FYoURo/SPe62QCaAyzJvUjwRaIsc+NePBEniHlvxFmmX56+HZphIGtV0XeCirBtpDrTyQ=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "range-parser": {[m
[32m+[m[32m      "version": "1.2.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/range-parser/-/range-parser-1.2.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-Hrgsx+orqoygnmhFbKaHE6c296J+HTAQXoxEF6gNupROmmGJRoyzfG3ccAveqCBrwr/2yxQ5BVd/GTl5agOwSg=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "raw-body": {[m
[32m+[m[32m      "version": "2.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/raw-body/-/raw-body-2.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-4Oz8DUIwdvoa5qMJelxipzi/iJIi40O5cGV1wNYp5hvZP8ZN0T+jiNkL0QepXs+EsQ9XJ8ipEDoiH70ySUJP3Q==",[m
[32m+[m[32m      "requires": {[m
[32m+[m[32m        "bytes": "3.1.0",[m
[32m+[m[32m        "http-errors": "1.7.2",[m
[32m+[m[32m        "iconv-lite": "0.4.24",[m
[32m+[m[32m        "unpipe": "1.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "safe-buffer": {[m
[32m+[m[32m      "version": "5.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/safe-buffer/-/safe-buffer-5.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-Gd2UZBJDkXlY7GbJxfsE8/nvKkUEU1G38c1siN6QP6a9PT9MmHB8GnpscSmMJSoF8LOIrt8ud/wPtojys4G6+g=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "safer-buffer": {[m
[32m+[m[32m      "version": "2.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/safer-buffer/-/safer-buffer-2.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-YZo3K82SD7Riyi0E1EQPojLz7kpepnSQI9IyPbHHg1XXXevb5dJI7tpyN2ADxGcQbHG7vcyRHk0cbwqcQriUtg=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "send": {[m
[32m+[m[32m      "version": "0.17.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/send/-/send-0.17.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BsVKsiGcQMFwT8UxypobUKyv7irCNRHk1T0G680vk88yf6LBByGcZJOTJCrTP2xVN6yI+XjPJcNuE3V4fT9sAg==",[m
[32m+[m[32m      "requires": {