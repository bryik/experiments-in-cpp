# 22-webApi

This is "hello world" for a web API using the [Drogon framework](https://github.com/drogonframework/drogon).

It uses Docker to side-step the annoyance of setting up a C++ environment.

## usage

Start the container:

```bash
docker-compose up
```

Then once the container is running, get a terminal inside either through the Docker GUI (easy) or through your terminal:

```bash
docker exec -it 22-webapi_drogon_1 /bin/bash
```

At this point you should be good to continue with the [Drogon quick start](https://github.com/drogonframework/drogon/wiki/ENG-03-Quick-Start). The container should be mounted to this directory so running:

```bash
drogon_ctl create project hello-world
```

should create files in this folder.

In `./hello-world/main.cc`, change the port to 8888:

```bash
drogon::app().addListener("0.0.0.0", 8888);
```

Build the project:

```bash
cd build
cmake ..
make
```

Run the project:

```bash
./hello-world
```

It should be reachable in your browser at [http://localhost:8888/](http://localhost:8888/)

## tearing it down

Exit the container:

```bash
exit
```

Kill the container:

```bash
docker-compose down
```

(May have to `cd` back to `/experiments/22-webApi`).
