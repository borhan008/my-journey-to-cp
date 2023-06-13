exports.aboutController = (req, res) => {
  console.log(req.url);
  res.send("About us");
};

exports.helpController = (req, res) => {
  console.log(req.url);
  res.send("helpController us");
};
