
CROW_ROUTE(app, "/")
  .name("hello")([] {
      return "Hello World!";
  });

{
  return "hello world";
}
