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
 * Ezsigntemplatesignature_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsigntemplatesignature
 */

#ifndef Ezsigntemplatesignature_createObject_v2_Request_H
#define Ezsigntemplatesignature_createObject_v2_Request_H

#include <QJsonObject>

#include "Ezsigntemplatesignature_RequestCompoundV2.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesignature_RequestCompoundV2;

class Ezsigntemplatesignature_createObject_v2_Request : public Object {
public:
    Ezsigntemplatesignature_createObject_v2_Request();
    Ezsigntemplatesignature_createObject_v2_Request(QString json);
    ~Ezsigntemplatesignature_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatesignature_RequestCompoundV2> getAObjEzsigntemplatesignature() const;
    void setAObjEzsigntemplatesignature(const QList<Ezsigntemplatesignature_RequestCompoundV2> &a_obj_ezsigntemplatesignature);
    bool is_a_obj_ezsigntemplatesignature_Set() const;
    bool is_a_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatesignature_RequestCompoundV2> m_a_obj_ezsigntemplatesignature;
    bool m_a_obj_ezsigntemplatesignature_isSet;
    bool m_a_obj_ezsigntemplatesignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignature_createObject_v2_Request)

#endif // Ezsigntemplatesignature_createObject_v2_Request_H
