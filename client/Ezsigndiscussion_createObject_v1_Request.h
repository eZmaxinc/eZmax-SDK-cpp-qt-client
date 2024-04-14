/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndiscussion_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigndiscussion
 */

#ifndef Ezsigndiscussion_createObject_v1_Request_H
#define Ezsigndiscussion_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigndiscussion_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigndiscussion_RequestCompound;

class Ezsigndiscussion_createObject_v1_Request : public Object {
public:
    Ezsigndiscussion_createObject_v1_Request();
    Ezsigndiscussion_createObject_v1_Request(QString json);
    ~Ezsigndiscussion_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigndiscussion_RequestCompound> getAObjEzsigndiscussion() const;
    void setAObjEzsigndiscussion(const QList<Ezsigndiscussion_RequestCompound> &a_obj_ezsigndiscussion);
    bool is_a_obj_ezsigndiscussion_Set() const;
    bool is_a_obj_ezsigndiscussion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigndiscussion_RequestCompound> m_a_obj_ezsigndiscussion;
    bool m_a_obj_ezsigndiscussion_isSet;
    bool m_a_obj_ezsigndiscussion_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndiscussion_createObject_v1_Request)

#endif // Ezsigndiscussion_createObject_v1_Request_H
