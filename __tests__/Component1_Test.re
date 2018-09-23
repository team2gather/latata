open Jest;

describe("Component", () => {
  open ExpectJs;

  test("renders", () => {
    let component = ReactShallowRenderer.renderWithRenderer(<Component1 message="dogs" />);

    expect(Js.Undefined.return(component)) |> toBeDefined;
  });
});