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
 * Variableexpense_createObject_v1_Request.h
 *
 * Request for POST /1/object/variableexpense
 */

#ifndef Variableexpense_createObject_v1_Request_H
#define Variableexpense_createObject_v1_Request_H

#include <QJsonObject>

#include "Variableexpense_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Variableexpense_RequestCompound;

class Variableexpense_createObject_v1_Request : public Object {
public:
    Variableexpense_createObject_v1_Request();
    Variableexpense_createObject_v1_Request(QString json);
    ~Variableexpense_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Variableexpense_RequestCompound> getAObjVariableexpense() const;
    void setAObjVariableexpense(const QList<Variableexpense_RequestCompound> &a_obj_variableexpense);
    bool is_a_obj_variableexpense_Set() const;
    bool is_a_obj_variableexpense_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Variableexpense_RequestCompound> m_a_obj_variableexpense;
    bool m_a_obj_variableexpense_isSet;
    bool m_a_obj_variableexpense_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Variableexpense_createObject_v1_Request)

#endif // Variableexpense_createObject_v1_Request_H