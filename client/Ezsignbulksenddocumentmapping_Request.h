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
 * Ezsignbulksenddocumentmapping_Request.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef Ezsignbulksenddocumentmapping_Request_H
#define Ezsignbulksenddocumentmapping_Request_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignbulksenddocumentmapping_Request : public Object {
public:
    Ezsignbulksenddocumentmapping_Request();
    Ezsignbulksenddocumentmapping_Request(QString json);
    ~Ezsignbulksenddocumentmapping_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksenddocumentmappingId() const;
    void setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id);
    bool is_pki_ezsignbulksenddocumentmapping_id_Set() const;
    bool is_pki_ezsignbulksenddocumentmapping_id_Valid() const;

    qint32 getFkiEzsignbulksendId() const;
    void setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id);
    bool is_fki_ezsignbulksend_id_Set() const;
    bool is_fki_ezsignbulksend_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignbulksenddocumentmapping_id;
    bool m_pki_ezsignbulksenddocumentmapping_id_isSet;
    bool m_pki_ezsignbulksenddocumentmapping_id_isValid;

    qint32 m_fki_ezsignbulksend_id;
    bool m_fki_ezsignbulksend_id_isSet;
    bool m_fki_ezsignbulksend_id_isValid;

    qint32 m_fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksenddocumentmapping_Request)

#endif // Ezsignbulksenddocumentmapping_Request_H
