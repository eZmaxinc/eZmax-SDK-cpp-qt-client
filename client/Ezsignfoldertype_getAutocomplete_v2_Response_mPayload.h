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
 * Ezsignfoldertype_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsignfoldertype/getAutocomplete
 */

#ifndef Ezsignfoldertype_getAutocomplete_v2_Response_mPayload_H
#define Ezsignfoldertype_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignfoldertype_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfoldertype_AutocompleteElement_Response;

class Ezsignfoldertype_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Ezsignfoldertype_getAutocomplete_v2_Response_mPayload();
    Ezsignfoldertype_getAutocomplete_v2_Response_mPayload(QString json);
    ~Ezsignfoldertype_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignfoldertype_AutocompleteElement_Response> getAObjEzsignfoldertype() const;
    void setAObjEzsignfoldertype(const QList<Ezsignfoldertype_AutocompleteElement_Response> &a_obj_ezsignfoldertype);
    bool is_a_obj_ezsignfoldertype_Set() const;
    bool is_a_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignfoldertype_AutocompleteElement_Response> m_a_obj_ezsignfoldertype;
    bool m_a_obj_ezsignfoldertype_isSet;
    bool m_a_obj_ezsignfoldertype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_getAutocomplete_v2_Response_mPayload)

#endif // Ezsignfoldertype_getAutocomplete_v2_Response_mPayload_H
