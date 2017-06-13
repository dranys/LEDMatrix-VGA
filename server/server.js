//Created by manzumbado 

var express     = require('express');
var app         = express();
var bodyParser  = require('body-parser');
var morgan		= require('morgan');


 //*****************
 //Config
 //*****************

 var port = process.env.PORT || 8080; 
//This is to get the request parameters
app.use(bodyParser.urlencoded({ extended: false }));
app.use(bodyParser.json());
app.use(morgan('dev')); //This is lo log requests to the console
app.use('/', express.static(__dirname + '/public'));



//******************
//Routes
//******************

// // basic Route (GET http://localhost:8080)
// app.get('/', function(req, res) {
//   res.send('Hi! The API is at http://localhost:' + port + '/api');
// });
 
// Start the server
app.listen(port);
console.log('Starting the server on: http://localhost:' + port);

// bundle for the routes
var apiRoutes = express.Router();



// POST method to send a string (POST http://localhost:8080)
apiRoutes.post('/message', function(req, res) {
  //child_p.execSync('call a program');
  console.log(req.body.message);
  res.send(JSON.parse('{ok}'));
});

// connect the api routes underut /api/*
app.use('/api', apiRoutes);
