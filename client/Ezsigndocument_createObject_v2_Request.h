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
 * Ezsigndocument_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsigndocument
 */

#ifndef Ezsigndocument_createObject_v2_Request_H
#define Ezsigndocument_createObject_v2_Request_H

#include <QJsonObject>

#include "Ezsigndocument_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigndocument_RequestCompound;

class Ezsigndocument_createObject_v2_Request : public Object {
public:
    Ezsigndocument_createObject_v2_Request();
    Ezsigndocument_createObject_v2_Request(QString json);
    ~Ezsigndocument_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigndocument_RequestCompound> getAObjEzsigndocument() const;
    void setAObjEzsigndocument(const QList<Ezsigndocument_RequestCompound> &a_obj_ezsigndocument);
    bool is_a_obj_ezsigndocument_Set() const;
    bool is_a_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigndocument_RequestCompound> m_a_obj_ezsigndocument;
    bool m_a_obj_ezsigndocument_isSet;
    bool m_a_obj_ezsigndocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_createObject_v2_Request)

#endif // Ezsigndocument_createObject_v2_Request_H