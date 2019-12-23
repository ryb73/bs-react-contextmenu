import { configure } from '@storybook/react';

// automatically import all files ending in *.js
const req = require.context('../lib/js/stories', true, /.js$/);
function loadStories() {
  req.keys().forEach(filename => req(filename));
}

configure(loadStories, module);
