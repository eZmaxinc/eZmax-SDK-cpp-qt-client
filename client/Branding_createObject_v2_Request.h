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
 * Branding_createObject_v2_Request.h
 *
 * Request for POST /2/object/branding
 */

#ifndef Branding_createObject_v2_Request_H
#define Branding_createObject_v2_Request_H

#include <QJsonObject>

#include "Branding_RequestCompoundV2.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Branding_RequestCompoundV2;

class Branding_createObject_v2_Request : public Object {
public:
    Branding_createObject_v2_Request();
    Branding_createObject_v2_Request(QString json);
    ~Branding_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Branding_RequestCompoundV2> getAObjBranding() const;
    void setAObjBranding(const QList<Branding_RequestCompoundV2> &a_obj_branding);
    bool is_a_obj_branding_Set() const;
    bool is_a_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Branding_RequestCompoundV2> m_a_obj_branding;
    bool m_a_obj_branding_isSet;
    bool m_a_obj_branding_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Branding_createObject_v2_Request)

#endif // Branding_createObject_v2_Request_H
