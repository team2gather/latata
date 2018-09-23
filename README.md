# latata

Rewrite of [hate](https://github.com/team2gather/hate) with updated dependencies; also a sensible boilerplate for starting new reason-react projects

## Run Project

```sh
yarn install
yarn start
# in another tab
yarn run webpack:dev
```

Or alternatively

```zsh
yarn run develop
```

After you see the webpack compilation succeed (the `npm run webpack` step), open up `src/index.html` (**no server needed!**). Then modify whichever `.re` file in `src` and refresh the page to see the changes.

**For more elaborate ReasonReact examples**, please see https://github.com/reasonml-community/reason-react-example

## Testing

```zsh
yarn run build && yarn run test
```

Will run all the jest based DOM tests

## Build for Production

```sh
yarn run build
yarn run webpack:production
```

This will replace the development artifact `build/Index.js` for an optimized version.

**To enable dead code elimination**, change `bsconfig.json`'s `package-specs` `module` from `"commonjs"` to `"es6"`. Then re-run the above 2 commands. This will allow Webpack to remove unused code.

## Boilerplate

As a good starting point for future reason-react webpack-based front-end projects, checkout this branch:

