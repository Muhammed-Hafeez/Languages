(async () => {
    console.log('this is immediatly invoked function');

})().then(() => {
    console.log('it can be async too');
})