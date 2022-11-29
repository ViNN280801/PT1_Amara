FROM alpine as pt1_amara

RUN apk add build-base
WORKDIR /app
COPY . .

RUN gcc task1.c -std=c17 -Wall -Wpedantic -Wextra -o task1 && \
    gcc task2.c -std=c17 -Wall -Wpedantic -Wextra -o task2

FROM alpine:latest

COPY --from=pt1_amara /app/task1 /app/task1
WORKDIR /app
