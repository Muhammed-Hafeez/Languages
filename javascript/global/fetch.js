const options = {
  method: "GET",
  headers: {
    "x-rapidapi-key": "65b93c73a0mshf002fea0fcd46c7p1fbbf6jsn1fa805866bae",
    "x-rapidapi-host": "weatherapi-com.p.rapidapi.com",
  },
};
const url =
  "https://weatherapi-com.p.rapidapi.com/current.json?q=53.1%2C-0.13?q=bangalore";

const googleapi = async (url, options) => {
  let api = await fetch(url, options);
  return api.json();
};
googleapi(url, options).then((value) => {
    console.log(value);
});
