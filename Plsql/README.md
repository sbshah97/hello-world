#PL/SQL 'Hello World!'  
  
[PL/SQL][1] is a language designed to embrace SQL statements within its syntax. PL/SQL program units are compiled by the Oracle Database server and stored inside the database. 

### Requirements

You need an Oracle Database instance and a client program like SQL PLUS to work with PL/SQL programs.  

If you don't have access to an Oracle Database instance, you can install [Oracle XE][4] (Express Edition) or a docker image already prepared for this purpose. A docker image is usually the best option for a quick start. The [wnameless/oracle-xe-11g][2] docker image worked fine to me, but you can find others at [Docker Store][3].  

Instructions about how to download and install [SQL PLUS][5] can be found at Oracle site.

### Running

After cloning this project execute the following commands:

#### 1. Navigate to PL/SQL language folder

`cd hello-world/Plsql` (Linux)  
`cd hello-world\Plsql` (Windows)

#### 2. Use SQL PLUS client to get connected

`sqlplus <username>/<password>@<host>:<port>/<service>`

For example:  

`sqlplus fadc80/1234@127.0.0.1:49161/xe`

#### 3. Execute the hello world program

`@helloworld.plsql`  

You should see the following output:

```
Hello World!

PL/SQL procedure successfully completed.
```

#### 4. Exit SQL PLUS client
   
`exit`

That's all.

[1]:http://www.oracle.com/technetwork/database/features/plsql/index.html
[2]:https://hub.docker.com/r/wnameless/oracle-xe-11g/ 
[3]:https://store.docker.com/search?q=oracle-xe&source=community
[4]:http://www.oracle.com/technetwork/database/database-technologies/express-edition/downloads/index.html
[5]:https://docs.oracle.com/database/121/SQPUG/apd.htm#SQPUG157
