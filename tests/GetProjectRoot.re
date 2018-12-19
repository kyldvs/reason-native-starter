let get = () => {
  switch (Sys.getenv_opt("REASON_PROJECT_ROOT")) {
  | Some(dir) => dir
  | None =>
    failwith(
      "Expected `REASON_PROJECT_ROOT` environment variable to be set "
      ++ "before running tests.",
    )
  };
};
