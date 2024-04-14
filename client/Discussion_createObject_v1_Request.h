/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Discussion_createObject_v1_Request.h
 *
 * Request for POST /1/object/discussion
 */

#ifndef Discussion_createObject_v1_Request_H
#define Discussion_createObject_v1_Request_H

#include <QJsonObject>

#include "Discussion_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Discussion_RequestCompound;

class Discussion_createObject_v1_Request : public Object {
public:
    Discussion_createObject_v1_Request();
    Discussion_createObject_v1_Request(QString json);
    ~Discussion_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Discussion_RequestCompound> getAObjDiscussion() const;
    void setAObjDiscussion(const QList<Discussion_RequestCompound> &a_obj_discussion);
    bool is_a_obj_discussion_Set() const;
    bool is_a_obj_discussion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Discussion_RequestCompound> m_a_obj_discussion;
    bool m_a_obj_discussion_isSet;
    bool m_a_obj_discussion_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussion_createObject_v1_Request)

#endif // Discussion_createObject_v1_Request_H