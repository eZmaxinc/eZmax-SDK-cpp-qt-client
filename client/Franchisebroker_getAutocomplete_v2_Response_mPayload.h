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
 * Franchisebroker_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/franchisebroker/getAutocomplete
 */

#ifndef Franchisebroker_getAutocomplete_v2_Response_mPayload_H
#define Franchisebroker_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Franchisebroker_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Franchisebroker_AutocompleteElement_Response;

class Franchisebroker_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Franchisebroker_getAutocomplete_v2_Response_mPayload();
    Franchisebroker_getAutocomplete_v2_Response_mPayload(QString json);
    ~Franchisebroker_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Franchisebroker_AutocompleteElement_Response> getAObjFranchisebroker() const;
    void setAObjFranchisebroker(const QList<Franchisebroker_AutocompleteElement_Response> &a_obj_franchisebroker);
    bool is_a_obj_franchisebroker_Set() const;
    bool is_a_obj_franchisebroker_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Franchisebroker_AutocompleteElement_Response> m_a_obj_franchisebroker;
    bool m_a_obj_franchisebroker_isSet;
    bool m_a_obj_franchisebroker_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Franchisebroker_getAutocomplete_v2_Response_mPayload)

#endif // Franchisebroker_getAutocomplete_v2_Response_mPayload_H