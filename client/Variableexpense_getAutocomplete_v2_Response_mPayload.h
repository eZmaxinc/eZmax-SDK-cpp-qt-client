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
 * Variableexpense_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/variableexpense/getAutocomplete
 */

#ifndef Variableexpense_getAutocomplete_v2_Response_mPayload_H
#define Variableexpense_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Variableexpense_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Variableexpense_AutocompleteElement_Response;

class Variableexpense_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Variableexpense_getAutocomplete_v2_Response_mPayload();
    Variableexpense_getAutocomplete_v2_Response_mPayload(QString json);
    ~Variableexpense_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Variableexpense_AutocompleteElement_Response> getAObjVariableexpense() const;
    void setAObjVariableexpense(const QList<Variableexpense_AutocompleteElement_Response> &a_obj_variableexpense);
    bool is_a_obj_variableexpense_Set() const;
    bool is_a_obj_variableexpense_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Variableexpense_AutocompleteElement_Response> m_a_obj_variableexpense;
    bool m_a_obj_variableexpense_isSet;
    bool m_a_obj_variableexpense_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Variableexpense_getAutocomplete_v2_Response_mPayload)

#endif // Variableexpense_getAutocomplete_v2_Response_mPayload_H
