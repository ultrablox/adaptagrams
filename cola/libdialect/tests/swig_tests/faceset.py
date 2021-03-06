from pkg.adaptagrams import *

g = buildGraphFromTglfFile("../graphs/special/bundlecross.tglf")
hola_opts = HolaOpts()
hola_opts.routingScalar_shapeBufferDistance = 1/8.0
lor = LeaflessOrthoRouter(g, hola_opts)
lor.route()
op = OrthoPlanariser(g);
P = op.planarise();
faceSet = FaceSet(P)
assert faceSet.getNumFaces() == 7

