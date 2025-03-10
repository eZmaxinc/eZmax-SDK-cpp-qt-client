/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Discussionmessage_createObject_v1_Request.h
 *
 * Request for POST /1/object/discussionmessage
 */

#ifndef Discussionmessage_createObject_v1_Request_H
#define Discussionmessage_createObject_v1_Request_H

#include <QJsonObject>

#include "Discussionmessage_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Discussionmessage_RequestCompound;

class Discussionmessage_createObject_v1_Request : public Object {
public:
    Discussionmessage_createObject_v1_Request();
    Discussionmessage_createObject_v1_Request(QString json);
    ~Discussionmessage_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Discussionmessage_RequestCompound> getAObjDiscussionmessage() const;
    void setAObjDiscussionmessage(const QList<Discussionmessage_RequestCompound> &a_obj_discussionmessage);
    bool is_a_obj_discussionmessage_Set() const;
    bool is_a_obj_discussionmessage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Discussionmessage_RequestCompound> m_a_obj_discussionmessage;
    bool m_a_obj_discussionmessage_isSet;
    bool m_a_obj_discussionmessage_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussionmessage_createObject_v1_Request)

#endif // Discussionmessage_createObject_v1_Request_H
