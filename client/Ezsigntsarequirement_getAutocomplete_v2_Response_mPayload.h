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
 * Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsigntsarequirement/getAutocomplete
 */

#ifndef Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload_H
#define Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntsarequirement_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntsarequirement_AutocompleteElement_Response;

class Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload();
    Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload(QString json);
    ~Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntsarequirement_AutocompleteElement_Response> getAObjEzsigntsarequirement() const;
    void setAObjEzsigntsarequirement(const QList<Ezsigntsarequirement_AutocompleteElement_Response> &a_obj_ezsigntsarequirement);
    bool is_a_obj_ezsigntsarequirement_Set() const;
    bool is_a_obj_ezsigntsarequirement_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntsarequirement_AutocompleteElement_Response> m_a_obj_ezsigntsarequirement;
    bool m_a_obj_ezsigntsarequirement_isSet;
    bool m_a_obj_ezsigntsarequirement_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload)

#endif // Ezsigntsarequirement_getAutocomplete_v2_Response_mPayload_H
