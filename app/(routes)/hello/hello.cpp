
CROW_ROUTE(app, "/")
  .name("hello")([] {
      return "Hello World!";
  });

hello {
  return "hello world";
}
