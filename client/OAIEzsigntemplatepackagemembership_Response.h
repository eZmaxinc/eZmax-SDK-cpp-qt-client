/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackagemembership_Response.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef OAIEzsigntemplatepackagemembership_Response_H
#define OAIEzsigntemplatepackagemembership_Response_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackagemembership_Response : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_Response();
    OAIEzsigntemplatepackagemembership_Response(QString json);
    ~OAIEzsigntemplatepackagemembership_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackagemembershipId() const;
    void setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id);
    bool is_pki_ezsigntemplatepackagemembership_id_Set() const;
    bool is_pki_ezsigntemplatepackagemembership_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getIEzsigntemplatepackagemembershipOrder() const;
    void setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order);
    bool is_i_ezsigntemplatepackagemembership_order_Set() const;
    bool is_i_ezsigntemplatepackagemembership_order_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatepackagemembership_id;
    bool m_pki_ezsigntemplatepackagemembership_id_isSet;
    bool m_pki_ezsigntemplatepackagemembership_id_isValid;

    qint32 fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    qint32 fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 i_ezsigntemplatepackagemembership_order;
    bool m_i_ezsigntemplatepackagemembership_order_isSet;
    bool m_i_ezsigntemplatepackagemembership_order_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_Response)

#endif // OAIEzsigntemplatepackagemembership_Response_H