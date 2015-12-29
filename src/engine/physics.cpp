#include "physics.h"

namespace sky {

b2Body *Physics::planeBody(b2Vec2 dims) {
  b2BodyDef planeBodyDef;
  b2Body *body = world.CreateBody(&planeBodyDef);

  b2PolygonShape planeShape;
  planeShape.SetAsBox(scalar * dims.x, scalar * dims.y);
  b2FixtureDef planeFixture;
  planeFixture.shape = &planeShape;
  planeFixture.restitution = 0; // etc etc
  body->CreateFixture(&planeFixture);

  return body;
}

}