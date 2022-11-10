/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplateformfieldgroupsigner_Request.h
 *
 * A Ezsigntemplateformfieldgroupsigner Object
 */

#ifndef OAIEzsigntemplateformfieldgroupsigner_Request_H
#define OAIEzsigntemplateformfieldgroupsigner_Request_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplateformfieldgroupsigner_Request : public OAIObject {
public:
    OAIEzsigntemplateformfieldgroupsigner_Request();
    OAIEzsigntemplateformfieldgroupsigner_Request(QString json);
    ~OAIEzsigntemplateformfieldgroupsigner_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldgroupsignerId() const;
    void setPkiEzsigntemplateformfieldgroupsignerId(const qint32 &pki_ezsigntemplateformfieldgroupsigner_id);
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Set() const;
    bool is_pki_ezsigntemplateformfieldgroupsigner_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplateformfieldgroupsigner_id;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isSet;
    bool m_pki_ezsigntemplateformfieldgroupsigner_id_isValid;

    qint32 fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfieldgroupsigner_Request)

#endif // OAIEzsigntemplateformfieldgroupsigner_Request_H
