const router = require("express").Router();
const { aboutController } = require("./controller");
router.get("/about", aboutController);

router.get("/contact", (req, res) => {
  fs.readFile("./pages/1.html", (err, data) => {
    if (err) {
      console.log(err);
      res.send("Something went wrong.");
    } else {
      res.write(data);
      res.end();
    }
  });
});

module.exports = router;
