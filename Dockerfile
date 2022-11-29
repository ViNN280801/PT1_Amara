FROM alpine as pt1_amara

RUN apk add build-base
WORKDIR /app
COPY . .

RUN gcc main.c -std=c17 -Wall -Wpedantic -Wextra -o main

FROM alpine:latest

COPY --from=pt1_amara /app/main /app/main
WORKDIR /app
