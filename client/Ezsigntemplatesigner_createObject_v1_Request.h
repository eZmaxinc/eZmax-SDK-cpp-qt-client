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
 * Ezsigntemplatesigner_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatesigner
 */

#ifndef Ezsigntemplatesigner_createObject_v1_Request_H
#define Ezsigntemplatesigner_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatesigner_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesigner_RequestCompound;

class Ezsigntemplatesigner_createObject_v1_Request : public Object {
public:
    Ezsigntemplatesigner_createObject_v1_Request();
    Ezsigntemplatesigner_createObject_v1_Request(QString json);
    ~Ezsigntemplatesigner_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatesigner_RequestCompound> getAObjEzsigntemplatesigner() const;
    void setAObjEzsigntemplatesigner(const QList<Ezsigntemplatesigner_RequestCompound> &a_obj_ezsigntemplatesigner);
    bool is_a_obj_ezsigntemplatesigner_Set() const;
    bool is_a_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatesigner_RequestCompound> m_a_obj_ezsigntemplatesigner;
    bool m_a_obj_ezsigntemplatesigner_isSet;
    bool m_a_obj_ezsigntemplatesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesigner_createObject_v1_Request)

#endif // Ezsigntemplatesigner_createObject_v1_Request_H